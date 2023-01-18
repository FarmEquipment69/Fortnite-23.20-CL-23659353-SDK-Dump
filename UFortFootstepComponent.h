// Class /Script/FortniteGame.FortFootstepComponent
// Size: 0x128
class UFortFootstepComponent : public UFortPawnComponent
{
	class UFortFootstepAudioBank* FootstepBank; // 0xa0 (0x8)
	float MaxFootstepDistance; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	class USoundBase* DefaultFootstepSound; // 0xb0 (0x8)
	class USoundBase* DefaultFastFootstepSound; // 0xb8 (0x8)
	class USoundBase* DBNOLandingSound; // 0xc0 (0x8)
	class USoundBase* DefaultLandingSound; // 0xc8 (0x8)
	class USoundBase* DefaultHardLandingSound; // 0xd0 (0x8)
	class USoundBase* DefaultCrouchSound; // 0xd8 (0x8)
	class USoundBase* DefaultStandSound; // 0xe0 (0x8)
	struct TEnumAsByte<EFortFootstepSurfaceType> SurfaceType; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x7]; // 0xe9 (0x7) 
	class UClass* PlayerFoleyContextClass; // 0xf0 (0x8)
	class UFortPlayerFoleyContext* PlayerFoleyContext; // 0xf8 (0x8)
	class AFortPawn* OwningPawn; // 0x100 (0x8)
	unsigned char unreflected_108[0x10]; // 0x108 (0x10) 
	class UFortSurfaceTrackingComponent* SurfaceTrackingComponent; // 0x118 (0x8)
	unsigned char padding_120[0x8]; // 0x120 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortFootstepComponent.PlayFootstep (Underlying native function: PlayFootstep 0x86e99d8)
	void PlayFootstep(int& FootDown); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFootstepComponent.HandleSurfaceTypeChanged (Underlying native function: HandleSurfaceTypeChanged 0x21ba454)
	void HandleSurfaceTypeChanged(class AActor*& SurfaceActor, struct TEnumAsByte<EPhysicalSurface>& CurrentSurfaceType, struct TEnumAsByte<EPhysicalSurface>& PrevSurfaceType); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortFootstepComponent.GetSurfaceType (Underlying native function: GetSurfaceType 0x86e8f68)
	struct TEnumAsByte<EFortFootstepSurfaceType> GetSurfaceType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

