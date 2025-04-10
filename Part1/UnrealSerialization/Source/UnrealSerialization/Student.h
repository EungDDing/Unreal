// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Student.generated.h"

/**
 * 
 */
UCLASS()
class UNREALSERIALIZATION_API UStudent : public UObject
{
	GENERATED_BODY()

public:
	UStudent();

	int32 GetOrder() const { return Order; }
	const FString& GetName() const{ return Name; }

	void SetOrder(int32 InOrder) { Order = InOrder; }
	void SetName(const FString& InName) { Name = InName; }

	virtual void Serialize(FArchive& Ar) override;

private:
	UPROPERTY()
	int32 Order;

	UPROPERTY()
	FString Name;
};
