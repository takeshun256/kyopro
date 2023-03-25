.PHONY: start

# Start the docker container and open a bash shell
start:
	docker-compose up -d --build
	docker-compose exec cpp_env bash
