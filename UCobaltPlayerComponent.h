// Class /Script/FortniteGame.CobaltPlayerComponent
// Size: 0xc8
class UCobaltPlayerComponent : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x1c]; // 0xa0 (0x1c) 
	struct TWeakObjectPtr<class AFortAthenaMutator_Cobalt> CachedMutator; // 0xbc (0x8)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.CobaltPlayerComponent.OnRep_CachedMutator (Underlying native function: OnRep_CachedMutator 0x845fb98)
	void OnRepCachedMutator(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.CobaltPlayerComponent.OnPlayerPawnLoaded (Underlying native function: OnPlayerPawnLoaded 0x845fab8)
	void OnPlayerPawnLoaded(class AFortPlayerController*& PlayerController); // (Final | Native | Public)

	// Function /Script/FortniteGame.CobaltPlayerComponent.OnPawnLanded (Underlying native function: OnPawnLanded 0x845f95c)
	void OnPawnLanded(struct FHitResult& Hit); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.CobaltPlayerComponent.OnPawnEnterWater (Underlying native function: OnPawnEnterWater 0x845f8e0)
	void OnPawnEnterWater(class AFortPlayerPawn*& Pawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.CobaltPlayerComponent.ClientOnPawnKilled (Underlying native function: ClientOnPawnKilled 0x845d460)
	void ClientOnPawnKilled(class AFortPlayerStateAthena*& Victim); // (Final | Native | Public)
};

