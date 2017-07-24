#!/bin/bash
for i in {0..200};do

	for  j in {0..9}; do
		./cliente 127.0.0.1 4535 ../archivos_random/archivo$j archivo$j
	done
done
