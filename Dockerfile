# Multi-stage Docker build za C aplikacijo
FROM gcc:12 as builder

# Nastavi delovni direktorij
WORKDIR /app

# Namesti potrebne pakete
RUN apt-get update && apt-get install -y \
    make \
    gcc-multilib \
    g++-multilib \
    && rm -rf /var/lib/apt/lists/*

# Kopiraj source datoteke
COPY main.c .
COPY Makefile .

# Zgradi aplikacijo (64-bit verzija za Docker)
RUN ARCH=-m64 make build

# Runtime stage - manjši image
FROM debian:bullseye-slim

# Namesti runtime dependencies
RUN apt-get update && apt-get install -y \
    libc6 \
    && rm -rf /var/lib/apt/lists/*

# Kopiraj zgrajeno aplikacijo iz builder stage
WORKDIR /app
COPY --from=builder /app/stopnje_prevajanja .

# Zaženi aplikacijo
CMD ["./stopnje_prevajanja"]
