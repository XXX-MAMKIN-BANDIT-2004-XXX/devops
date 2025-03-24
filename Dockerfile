FROM ubuntu:latest

COPY cicd/*.deb /tmp/

RUN apt-get update && \
    apt-get install -y /tmp/*.deb && \
    rm -rf /var/lib/apt/lists/*

CMD ["/bin/devops"]
