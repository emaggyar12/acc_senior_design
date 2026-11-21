#!/bin/bash
set -ex

sed -i "s/$1/$1_PID/g" *
