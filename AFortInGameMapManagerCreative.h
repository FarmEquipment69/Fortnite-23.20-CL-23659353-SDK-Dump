// Class /Script/FortniteGame.FortInGameMapManagerCreative
// Size: 0xac0
class AFortInGameMapManagerCreative : public AFortInGameMapManagerAthena
{
	class UMaterialInterface* HeatmapEnabledMapMaterial; // 0x930 (0x8)
	class UMaterialInterface* HeatmapDisabledMapMaterial; // 0x938 (0x8)
	struct TArray<struct FLinearColor> HeatmapColorRange; // 0x940 (0x10)
	class UMaterialInterface* HighMemMaterial; // 0x950 (0x8)
	class UMaterialInterface* LockedMaterial; // 0x958 (0x8)
	struct FSlateFontInfo HeatmapValuesFontInfo; // 0x960 (0x58)
	struct FSlateFontInfo HeatmapValuesMinimapFontInfo; // 0x9b8 (0x58)
	int HeatmapMinValueForVisibility; // 0xa10 (0x4)
	float HeatmapColorAlpha; // 0xa14 (0x4)
	unsigned char unreflected_a18[0x8]; // 0xa18 (0x8) 
	class UMaterialInterface* CreativeMapMaterial; // 0xa20 (0x8)
	unsigned char unreflected_a28[0x40]; // 0xa28 (0x40) 
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> EmptyMinimapLocationRenderData; // 0xa68 (0x50)
	unsigned char padding_ab8[0x8]; // 0xab8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortInGameMapManagerCreative.SetCurrentVolume (Underlying native function: SetCurrentVolume 0x8392848)
	void SetCurrentVolume(class AFortVolume*& InVolume); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManagerCreative.OnVolumeObjectTrackingComponentChanged (Underlying native function: OnVolumeObjectTrackingComponentChanged 0x83925cc)
	void OnVolumeObjectTrackingComponentChanged(class UFortVolumeObjectTrackingComponent*& InVolumeObjectTrackingComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortInGameMapManagerCreative.OnPlayModeChanged (Underlying native function: OnPlayModeChanged 0x83923b0)
	void OnPlayModeChanged(class AFortMinigame*& Minigame, bool& bIsInPlayMode); // (Final | Native | Private)
};

