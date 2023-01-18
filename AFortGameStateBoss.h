// Class /Script/FortniteGame.FortGameStateBoss
// Size: 0x1110
class AFortGameStateBoss : public AFortGameStatePvE
{
	unsigned char unreflected_1110[0x1110]; 

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateBoss.BossSpawned (Underlying native function: BossSpawned 0x26daa0c)
	void BossSpawned(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateBoss.BossKilled (Underlying native function: BossKilled 0x8ea8d70)
	void BossKilled(class AController*& InstigatingController, class AActor*& DamageCausingActor, struct FGameplayTagContainer& DamageTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateBoss.AllPlayersDied (Underlying native function: AllPlayersDied 0x26daa0c)
	void AllPlayersDied(); // (Final | Native | Public | BlueprintCallable)
};

