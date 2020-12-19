FROM ubuntu:latest

WORKDIR /home/atcoder

RUN apt-get update && apt-get install -y \
	vim \
	gcc \
	g++ \

