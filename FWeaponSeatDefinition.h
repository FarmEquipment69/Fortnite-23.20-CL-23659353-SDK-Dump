// ScriptStruct /Script/FortniteGame.WeaponSeatDefinition
// Size: 0x48
struct FWeaponSeatDefinition
{
	int SeatIndex; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UFortWeaponItemDefinition* VehicleWeapon; // 0x8 (0x8)
	struct TArray<struct FActionDefForUI> WeaponActionDefForUI; // 0x10 (0x10)
	class UFortWeaponItemDefinition* VehicleWeaponOverride; // 0x20 (0x8)
	class UFortWeaponItemDefinition* LastEquippedVehicleWeapon; // 0x28 (0x8)
	bool bSendReplicatedTargetingEvent; // 0x30 (0x1)
	unsigned char padding_31[0x17]; // 0x31 (0x17)
};

