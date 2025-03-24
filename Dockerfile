# Dockerfile
FROM ubuntu:latest

# Установка необходимых пакетов
RUN apt-get update && apt-get install -y wget make g++

# Копирование .deb пакета в контейнер
COPY ./cicd/devops-master.deb /tmp/devops-master.deb

# Установка .deb пакета
RUN dpkg -i /tmp/devops-master.deb || apt-get install -y -f

# Запуск приложения
CMD ["/usr/bin/Main"]
