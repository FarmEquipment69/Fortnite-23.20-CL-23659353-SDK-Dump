// Class /Script/FortniteGame.BuildingMusicSequencer
// Size: 0x1158
class ABuildingMusicSequencer : public ABuildingTrapFloor
{
	class AController* TriggerInstigator; // 0x1088 (0x8)
	class AController* CachedTriggerInstigator; // 0x1090 (0x8)
	unsigned char padding_1098[0xc0]; // 0x1098 (0xc0)

	/* Functions */

	// Function /Script/FortniteGame.BuildingMusicSequencer.ResetHitActors (Underlying native function: ResetHitActors 0x860ca80)
	void ResetHitActors(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingMusicSequencer.HitActorsAsync (Underlying native function: HitActorsAsync 0x860a39c)
	void HitActorsAsync(struct FTransform& Transform, struct FBoxSphereBounds& Bounds); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)
};

