// Class /Script/FortniteGame.BuildingWeakSpot
// Size: 0x300
class ABuildingWeakSpot : public AFortClientOnlyActor
{
	unsigned char unreflected_290[0x20]; // 0x290 (0x20) 
	struct TWeakObjectPtr<class UObject> ParentObject; // 0x2b0 (0x8)
	unsigned char bHit; // 0x2b8 (0x1)
	unsigned char bFadeOut; // 0x2b8 (0x1)
	unsigned char bActive; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x3]; // 0x2b9 (0x3) 
	int HitCount; // 0x2bc (0x4)
	int Level; // 0x2c0 (0x4)
	int MaxLevel; // 0x2c4 (0x4)
	struct FVector StartingLocation; // 0x2c8 (0x18)
	struct FVector HitNormal; // 0x2e0 (0x18)
	struct TEnumAsByte<EPhysicalSurface> PhysicalSurfaceType; // 0x2f8 (0x1)
	unsigned char padding_2f9[0x7]; // 0x2f9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingWeakSpot.OnStartDirectionEffect (Has no native function)
	void OnStartDirectionEffect(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingWeakSpot.OnHit (Has no native function)
	void OnHit(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingWeakSpot.OnFadeOut (Has no native function)
	void OnFadeOut(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingWeakSpot.Deactivate (Underlying native function: Deactivate 0x862bb1c)
	void Deactivate(); // (Final | Native | Public | BlueprintCallable)
};

