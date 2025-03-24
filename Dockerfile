FROM ubuntu:latest

COPY cicd/*.deb /tmp/

RUN apt-get update && \
    apt-get install -y /tmp/*.deb && \
    build-essential \
    make \
    rm -rf /var/lib/apt/lists/*
RUN cd ./cicd && make
CMD ["/bin/devops"]
