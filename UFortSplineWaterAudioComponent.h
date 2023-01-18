// Class /Script/FortniteGame.FortSplineWaterAudioComponent
// Size: 0x1e0
class UFortSplineWaterAudioComponent : public UFortSplineAudioComponent
{
	class USoundBase* InsideSplineSound; // 0x180 (0x8)
	class USoundBase* SplineEndSound; // 0x188 (0x8)
	enum ESplineWaterAudioFacingDirection SplineFacingDirection; // 0x190 (0x1)
	bool bIsExclusionSpline; // 0x191 (0x1)
	unsigned char unreflected_192[0x6]; // 0x192 (0x6) 
	struct FVector2D WaterVelocityRange; // 0x198 (0x10)
	float ShorelineOffset; // 0x1a8 (0x4)
	float TerrainZOffset; // 0x1ac (0x4)
	float MaxVerticalDistanceToCheckInside; // 0x1b0 (0x4)
	unsigned char unreflected_1b4[0x1c]; // 0x1b4 (0x1c) 
	class AFortWaterBodyActor* WaterBodyOwner; // 0x1d0 (0x8)
	unsigned char padding_1d8[0x8]; // 0x1d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSplineWaterAudioComponent.UpdateAudioZones (Underlying native function: UpdateAudioZones 0x272fa98)
	void UpdateAudioZones(struct TArray<struct FSplineWaterAudioZone>& NewZones); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

