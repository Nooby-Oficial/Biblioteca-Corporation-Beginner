FROM python:3.11-slim
WORKDIR /app
COPY ../Bibliotecas/libbiblioteca.so /app/
COPY app.py requirements.txt /app/
RUN pip install --no-cache-dir -r requirements.txt
EXPOSE 5000
CMD ["python", "app.py"]

# Dockerfile para backend Python com biblioteca nativa
FROM python:3.11-slim
WORKDIR /app
COPY libbiblioteca.so /app/
COPY app.py requirements.txt /app/
RUN pip install --no-cache-dir -r requirements.txt
EXPOSE 5000
CMD ["python", "app.py"]
