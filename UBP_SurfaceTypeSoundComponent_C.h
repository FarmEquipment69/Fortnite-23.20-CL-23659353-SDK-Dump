// BlueprintGeneratedClass /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
// Size: 0x119
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa0 (0x8)
	struct TEnumAsByte<EPhysicalSurface> SurfaceType; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct TMap<struct TEnumAsByte<EPhysicalSurface>, class USoundBase*> SoundMap; // 0xb0 (0x50)
	struct FVector Location; // 0x100 (0x18)
	bool IsSurfaceTypeSet; // 0x118 (0x1)

	/* Functions */

	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound (Has no native function)
	void ActuallyPlaySound(class USoundBase*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType (Has no native function)
	void SetSurfaceType(struct TEnumAsByte<EPhysicalSurface>& SurfaceType, class AActor*& Actor, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable, bool& CallFuncIsValidReturnValue, class ABuildingSMActor*& K2NodeDynamicCastAsBuildingStaticMesh, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable1, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable2, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable3, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable4, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable5, struct TEnumAsByte<EFortResourceType>& TempbyteVariable6, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable7, struct TEnumAsByte<EPhysicalSurface>& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound (Has no native function)
	void PlaySound(struct FVector& Location, class USoundBase*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay (Has no native function)
	void TestDelay(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent (Has no native function)
	void ExecuteUbergraphBPSurfaceTypeSoundComponent(int& EntryPoint); // (Final | 0x00008000)
};

