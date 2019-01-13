FROM ubuntu:18.04

RUN groupadd -r uwsgi && useradd -r -g uwsgi uwsgi
RUN apt-get update -y && apt-get install -yq python3-pip python3-dev wget && \
    wget https://bootstrap.pypa.io/get-pip.py && python3.6 get-pip.py && \
    pip install Flask uWSGI
WORKDIR /app
COPY app /app
COPY cmd.sh /

EXPOSE 9090 9191
USER uwsgi

CMD ["/cmd.sh"]
