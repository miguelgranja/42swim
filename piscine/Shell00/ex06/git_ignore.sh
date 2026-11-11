#!/bin/bash

cd $(git rev-parse --show-toplevel)

git ls-files --ignored --exclude-standard --others

