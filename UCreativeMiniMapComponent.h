// Class /Script/FortniteGame.CreativeMiniMapComponent
// Size: 0x2b8
class UCreativeMiniMapComponent : public UFortMiniMapComponent
{
	struct FMulticastInlineDelegate OnIconDataReplicatedEvent; // 0x1c8 (0x10)
	struct FFortMiniMapIndicatorTextProperties IndicatorTextProperties; // 0x1d8 (0x78)
	unsigned char unreflected_250[0x18]; // 0x250 (0x18) 
	struct FCreativeMiniMapComponentIconData IconData; // 0x268 (0x28)
	class UCreativeMinimapComponentIconList* IconList; // 0x290 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> LoadedMIDs; // 0x298 (0x10)
	class UMaterialInterface* LoadedMaterialInterface; // 0x2a8 (0x8)
	class UMaterialInstanceDynamic* CurrentMID; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CreativeMiniMapComponent.SetIndicatorTextOffset (Underlying native function: SetIndicatorTextOffset 0x8784a34)
	void SetIndicatorTextOffset(struct FVector2D& IndicatorTextOffset); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.SetIndicatorTextColor (Underlying native function: SetIndicatorTextColor 0x8784958)
	void SetIndicatorTextColor(struct FLinearColor& IndicatorTextColor); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.SetIndicatorText (Underlying native function: SetIndicatorText 0x8784828)
	void SetIndicatorText(struct FText& IndicatorText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.SetIndicatorIconColor (Underlying native function: SetIndicatorIconColor 0x878474c)
	void SetIndicatorIconColor(struct FLinearColor& IndicatorIconColor); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.OnRep_IconData (Underlying native function: OnRep_IconData 0x8782f24)
	void OnRepIconData(); // (Final | Native | Private)

	// DelegateFunction /Script/FortniteGame.CreativeMiniMapComponent.OnIconDataReplicated__DelegateSignature (Has no native function)
	void OnIconDataReplicatedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.ApplyVectorOverridesToMaterial (Underlying native function: ApplyVectorOverridesToMaterial 0x5d2c1a0)
	void ApplyVectorOverridesToMaterial(struct FName& ParameterName, struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.ApplyScalarOverridesToMaterial (Underlying native function: ApplyScalarOverridesToMaterial 0x5d2c0a0)
	void ApplyScalarOverridesToMaterial(struct FName& ParameterName, float& Value); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.ApplyLinearColorOverridesToMaterial (Underlying native function: ApplyLinearColorOverridesToMaterial 0x5d2bff0)
	void ApplyLinearColorOverridesToMaterial(struct FLinearColor& Color); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.ApplyIconTextureOverridesToMaterial (Underlying native function: ApplyIconTextureOverridesToMaterial 0x5d2bef0)
	void ApplyIconTextureOverridesToMaterial(struct FName& ParameterName, class UTexture2D*& Icon); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.CreativeMiniMapComponent.ApplyColorOverridesToMaterial (Underlying native function: ApplyColorOverridesToMaterial 0x5d2be50)
	void ApplyColorOverridesToMaterial(enum ECreativeMinimapComponentIconColorType& Color); // (Final | Native | Public | BlueprintCallable | Const)
};

