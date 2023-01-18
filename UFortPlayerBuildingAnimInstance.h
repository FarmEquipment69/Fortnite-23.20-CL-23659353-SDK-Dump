// Class /Script/FortniteGame.FortPlayerBuildingAnimInstance
// Size: 0x450
class UFortPlayerBuildingAnimInstance : public UFortBaseLayerAnimInstance
{
	class AFortPlayerPawn* FortPlayerPawn; // 0x440 (0x8)
	struct TEnumAsByte<EFortBuildingState> BuildingState; // 0x448 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x449 (0x1)
	unsigned char bIsCrouching; // 0x44a (0x1)
	unsigned char bIsInBuildingEditMode; // 0x44a (0x1)
	unsigned char padding_44b[0x5]; // 0x44b (0x5)
};

