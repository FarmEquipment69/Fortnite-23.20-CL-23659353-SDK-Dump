// Class /Script/FortniteGame.FortMiniMapComponent
// Size: 0x1c8
class UFortMiniMapComponent : public UFortVisibilityComponent
{
	struct FFortMiniMapData MiniMapData; // 0xc0 (0xc8)
	class UTexture2D* LocalMinimapIconOverride; // 0x188 (0x8)
	struct TWeakObjectPtr<class UFortMiniMapIndicator> MiniMapIndicator; // 0x190 (0x8)
	class UClass* MinimapIndicatorClass; // 0x198 (0x8)
	unsigned char padding_1a0[0x28]; // 0x1a0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortMiniMapComponent.SetupMiniMapComponent (Underlying native function: SetupMiniMapComponent 0x8f9b70c)
	void SetupMiniMapComponent(class UTexture2D*& MiniMapIcon, struct FLinearColor& IconColor, struct FLinearColor& PulseColor, float& ColorPulsesPerSecond, float& SizePulsesPerSecond); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapViewableDistance (Underlying native function: SetMiniMapViewableDistance 0x8f9b4b0)
	void SetMiniMapViewableDistance(float& ViewDistance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapLocationOffset (Underlying native function: SetMiniMapLocationOffset 0x8f9b3d4)
	void SetMiniMapLocationOffset(struct FVector& LocationOffset); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIndicatorTeam (Underlying native function: SetMiniMapIndicatorTeam 0x8f9b340)
	void SetMiniMapIndicatorTeam(unsigned char& Team); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIndicatorIsVisibleOnMiniMap (Underlying native function: SetMiniMapIndicatorIsVisibleOnMiniMap 0x8f9b284)
	void SetMiniMapIndicatorIsVisibleOnMiniMap(bool& bVisibleOnMiniMap); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIndicatorIsVisibleOnMap (Underlying native function: SetMiniMapIndicatorIsVisibleOnMap 0x8f9b1c8)
	void SetMiniMapIndicatorIsVisibleOnMap(bool& bVisibleOnMap); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIndicatorIsVisible (Underlying native function: SetMiniMapIndicatorIsVisible 0x8f9b114)
	void SetMiniMapIndicatorIsVisible(bool& bVisible); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconSizePulsesPerSecond (Underlying native function: SetMiniMapIconSizePulsesPerSecond 0x8f9b090)
	void SetMiniMapIconSizePulsesPerSecond(float& SizePulsesPerSecond); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconScale (Underlying native function: SetMiniMapIconScale 0x856ea84)
	void SetMiniMapIconScale(struct FVector2D& IconScale); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconPulseColor (Underlying native function: SetMiniMapIconPulseColor 0x8f9b008)
	void SetMiniMapIconPulseColor(struct FLinearColor& PulseColor); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconMaterialVectorParameterValue (Underlying native function: SetMiniMapIconMaterialVectorParameterValue 0x8f9af40)
	void SetMiniMapIconMaterialVectorParameterValue(struct FName& ParameterName, struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconMaterialTextureParameterValue (Underlying native function: SetMiniMapIconMaterialTextureParameterValue 0x8f9ae7c)
	void SetMiniMapIconMaterialTextureParameterValue(struct FName& ParameterName, class UTexture*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconMaterialScalarParameterValue (Underlying native function: SetMiniMapIconMaterialScalarParameterValue 0x8f9adb4)
	void SetMiniMapIconMaterialScalarParameterValue(struct FName& ParameterName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconColorPulsesPerSecond (Underlying native function: SetMiniMapIconColorPulsesPerSecond 0x8f9ad30)
	void SetMiniMapIconColorPulsesPerSecond(float& ColorPulsesPerSecond); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIconColor (Underlying native function: SetMiniMapIconColor 0x8f9aca8)
	void SetMiniMapIconColor(struct FLinearColor& InColor); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.SetMiniMapIcon (Underlying native function: SetMiniMapIcon 0x856ea00)
	void SetMiniMapIcon(class UObject*& MiniMapIcon); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.OverrideLocalMiniMapIndicatorIsVisible (Underlying native function: OverrideLocalMiniMapIndicatorIsVisible 0x8f9a31c)
	void OverrideLocalMiniMapIndicatorIsVisible(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.OverrideLocalMiniMapIcon (Underlying native function: OverrideLocalMiniMapIcon 0x8f9a160)
	void OverrideLocalMiniMapIcon(class UTexture2D*& MiniMapIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent.OnRep_MiniMapData (Underlying native function: OnRep_MiniMapData 0x87b42ec)
	void OnRepMiniMapData(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMiniMapComponent.IsVisibleToPlayer (Underlying native function: IsVisibleToPlayer 0x862b68c)
	bool IsVisibleToPlayer(class AFortPlayerController*& PC); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMiniMapComponent.GetDynamicMaterial (Underlying native function: GetDynamicMaterial 0x8f998ac)
	class UMaterialInstanceDynamic* GetDynamicMaterial(); // (Final | Native | Public | BlueprintCallable)
};

