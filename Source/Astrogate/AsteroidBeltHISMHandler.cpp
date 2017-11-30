// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidBeltHISMHandler.h"


UAsteroidBeltHISMHandler::UAsteroidBeltHISMHandler()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UAsteroidBeltHISMHandler::BeginPlay()
{
	Super::BeginPlay();
}


void UAsteroidBeltHISMHandler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

