// Class /Script/FortniteGame.AthenaSkyCap
// Size: 0x2b0
class AAthenaSkyCap : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	struct FSkyCapTargetData* TargetData; // 0x2a0 (0x8)
	enum ESkyCapState SkyCapState; // 0x2a8 (0x1)
	unsigned char padding_2a9[0x7]; // 0x2a9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.AthenaSkyCap.StormStarting_Client (Has no native function)
	void StormStartingClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaSkyCap.OnStopMovement (Underlying native function: OnStopMovement 0x8505f5c)
	void OnStopMovement(struct FHitResult& ImpactResult, float& Time); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.AthenaSkyCap.OnRep_SkyCapState (Underlying native function: OnRep_SkyCapState 0x8505ec4)
	void OnRepSkyCapState(); // (Final | Native | Protected)
};

