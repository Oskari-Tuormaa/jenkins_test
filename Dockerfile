FROM python:3.10

ARG GID
ARG UID
ARG UNAME

RUN apt update
RUN apt install -y cmake

# Create jenkins user
RUN mkdir /home/$UNAME
COPY . /home/$UNAME
RUN groupadd -g $GID $UNAME
RUN useradd -r -u $UID -g $UNAME -d /home/$UNAME $UNAME
RUN chown -R $UNAME:$UNAME /home/$UNAME

USER $UNAME
WORKDIR /home/$UNAME
