# Stopnje Prevajanja - CI/CD Project

Projekt demonstrira CI/CD pipeline z GitHub Actions za C program.

## Struktura projekta

- `main.c` - Glavni program
- `test_main.c` - Testni program
- `Makefile` - Build skripta
- `Dockerfile` - Docker container definicija
- `.github/workflows/29885_test.yml` - Test workflow
- `.github/workflows/29885_deploy.yml` - Deploy workflow

## Lokalno poganjanje

```bash
# Build in run
make all

# Samo testi
make test

# Clean
make clean
```

## CI/CD Pipeline

1. **Test Workflow** - Preveri in zažene teste na 32-bit in 64-bit arhitekturah
2. **Deploy Workflow** - Ob uspešnih testih zgradi in objavi Docker image

## Docker

```bash
docker pull <YOUR_DOCKERHUB_USERNAME>/29885-stopnje-prevajanja:latest
docker run <YOUR_DOCKERHUB_USERNAME>/29885-stopnje-prevajanja:latest
```
