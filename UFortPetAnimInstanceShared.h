// Class /Script/FortniteGame.FortPetAnimInstanceShared
// Size: 0x5a0
class UFortPetAnimInstanceShared : public UFortAnimInstance
{
	float DeltaTime; // 0x530 (0x4)
	unsigned char unreflected_534[0x4]; // 0x534 (0x4) 
	struct FGameplayTagContainer PendingActiveVariantContextTags; // 0x538 (0x20)
	struct FGameplayTagContainer ActiveVariantContextTags; // 0x558 (0x20)
	unsigned char bAreActiveFlagChangesPending; // 0x578 (0x1)
	unsigned char unreflected_579[0x7]; // 0x579 (0x7) 
	class AFortPlayerPawn* OwnerFortPawn; // 0x580 (0x8)
	class AFortPlayerPet* OwnerPet; // 0x588 (0x8)
	unsigned char bIsOnGround; // 0x590 (0x1)
	unsigned char bIsFrontEndPreview; // 0x590 (0x1)
	unsigned char bLobbySkyDiveIsDiving; // 0x590 (0x1)
	unsigned char padding_591[0xf]; // 0x591 (0xf)
};

