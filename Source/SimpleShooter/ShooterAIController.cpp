// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"


void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();

    APawn *PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    // virtual void SetFocus(AActor* NewFocus, EAIFocusPriority::Type InPriority = EAIFocusPriority::Gameplay);
    SetFocus(PlayerPawn);
    // AActor* Goal, float AcceptanceRadius = -1, bool bStopOnOverlap = true, bool bUsePathfinding = true, bool bCanStrafe = true, TSubclassOf<UNavigationQueryFilter> FilterClass = NULL, bool bAllowPartialPath = true

}

void AShooterAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    APawn *PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    MoveToActor(PlayerPawn, 100);
}
