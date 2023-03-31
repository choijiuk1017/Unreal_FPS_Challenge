// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class UNREAL_FPS_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
    // ���� ���� �Ǵ� ���� �� ȣ��
    virtual void BeginPlay() override;

    //������ �� ������Ʈ�� �÷��̾� �ڿ� �ִ� ī�޶� ���󰩴ϴ�.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class USpringArmComponent* SpringArmComp;

    //�÷��̾ ī�޶� ���󰩴ϴ�.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class UCameraComponent* CameraComp;

    //����/���� �Է��� ���� ȣ���մϴ�.
    void MoveForward(float InputAxis);

    //����/������ �Է��� ���� ȣ���մϴ�.
    void MoveRight(float InputAxis);

    //ĳ���� �����Ʈ �ӵ��� ������Ʈ ������ �����մϴ�.
    void BeginSprint();

    //ĳ���� �����Ʈ �ӵ��� ����Ʈ �ӵ� ������ �ٽ� �����մϴ�.
    void EndSprint();

    //ĳ���Ϳ��� �ɱ⸦ ��û�մϴ�.
    void BeginCrouch();

    //ĳ���Ϳ��� �ɱ� ���Ḧ ��û�մϴ�.
    void EndCrouch();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
