// Class /Script/FortniteGame.FortThreatParticleActor
// Size: 0x298
class AFortThreatParticleActor : public AActor
{
	unsigned char unreflected_298[0x298]; 

	/* Functions */

	// Function /Script/FortniteGame.FortThreatParticleActor.OnWorldReady (Has no native function)
	void OnWorldReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortThreatParticleActor.OnThreatOverrideChanged (Has no native function)
	void OnThreatOverrideChanged(bool& bForceThreatOn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortThreatParticleActor.OnThreatCloudsChanged (Has no native function)
	void OnThreatCloudsChanged(struct TArray<struct FThreatLocationInfo>& ThreatLocationInfo); // (0x00000002 | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortThreatParticleActor.GetThreatClouds (Underlying native function: GetThreatClouds 0x8861300)
	struct TArray<struct FThreatLocationInfo> GetThreatClouds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

