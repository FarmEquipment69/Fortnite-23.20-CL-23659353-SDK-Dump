// ScriptStruct /Script/GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x48
struct FGameplayAbilityActorInfo
{
	struct TWeakObjectPtr<class AActor> OwnerActor; // 0x8 (0x8)
	struct TWeakObjectPtr<class AActor> AvatarActor; // 0x10 (0x8)
	struct TWeakObjectPtr<class APlayerController> PlayerController; // 0x18 (0x8)
	struct TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent; // 0x20 (0x8)
	struct TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent; // 0x28 (0x8)
	struct TWeakObjectPtr<class UAnimInstance> AnimInstance; // 0x30 (0x8)
	struct TWeakObjectPtr<class UMovementComponent> MovementComponent; // 0x38 (0x8)
	struct FName AffectedAnimInstanceTag; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

