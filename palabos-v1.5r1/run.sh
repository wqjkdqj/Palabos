#!/bin/bash
#PBS -N PALABOS
#PBS -m abe
#PBS -M jannick.seelen@gmail.com
#PBS -l nodes=2:ppn=48
#PBS -q rrr-pnr
#PBS -o "~/Palabos/run.log"
#PBS -j oe

set -e

sudo chmod -R +x ~/Palabos/palabos-v1.5r1/build/

cd ~/Palabos/palabos-v1.5r1/build/

echo "Running MPI"

mpirun ./viscosityTest /input/parameters.xml
