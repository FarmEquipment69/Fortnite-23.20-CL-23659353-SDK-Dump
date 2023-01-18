// Class /Script/VerseFortniteInternal.FortBuildingSettingsComponentBase
// Size: 0x90
class UFortBuildingSettingsComponentBase : public UEntityEnableableComponent
{
	class AFortAthenaMutator_BuildingSettings* Mutator; // 0x80 (0x8)
	struct TEnumAsByte<EPlayerSettingStateInternal> Building; // 0x88 (0x1)
	struct TEnumAsByte<EPlayerSettingStateInternal> BuildingOnWater; // 0x89 (0x1)
	struct TEnumAsByte<EPlayerSettingStateInternal> Editing; // 0x8a (0x1)
	struct TEnumAsByte<EPlayerSettingStateInternal> EditingHostile; // 0x8b (0x1)
	struct TEnumAsByte<EPlayerSettingStateInternal> TrapPlacement; // 0x8c (0x1)
	unsigned char padding_8d[0x3]; // 0x8d (0x3)

	/* Functions */

	// Function /Script/VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings (Underlying native function: OnRep_Settings 0x7080214)
	void OnRepSettings(); // (Final | Native | Private)
};

