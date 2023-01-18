// Class /Script/FortniteGame.SpecialEventHelpers
// Size: 0x28
class USpecialEventHelpers : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.SpecialEventHelpers.MarkAccountAsHavingSeenForcedIntro (Underlying native function: MarkAccountAsHavingSeenForcedIntro 0x8524278)
	static void MarkAccountAsHavingSeenForcedIntro(class AFortPlayerController*& Controller, bool& bLocalOnly); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SpecialEventHelpers.MarkAccountAsHavingSeenEditIntro_LocalOnly (Underlying native function: MarkAccountAsHavingSeenEditIntro_LocalOnly 0x8524208)
	static void MarkAccountAsHavingSeenEditIntroLocalOnly(class AFortPlayerController*& Controller); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SpecialEventHelpers.HasSeenForcedIntro (Underlying native function: HasSeenForcedIntro 0x8523fdc)
	static bool HasSeenForcedIntro(class AController*& Player); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.SpecialEventHelpers.HasSeenEditIntro (Underlying native function: HasSeenEditIntro 0x8523f28)
	static bool HasSeenEditIntro(class AController*& Player); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.SpecialEventHelpers.GetSpecialRelevancyMutator (Underlying native function: GetSpecialRelevancyMutator 0x8523aa0)
	static class AFortAthenaMutator_SpecialRelevancy* GetSpecialRelevancyMutator(class UObject*& WorldContextObject); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.SpecialEventHelpers.GetActorsInBox (Underlying native function: GetActorsInBox 0x85230e0)
	static void GetActorsInBox(struct TArray<class AActor*>& OutActors, class UObject*& WorldContextObject, struct TArray<class UClass*>& ActorClasses, struct FBox& SearchBox, bool& bTestActorBoundingBox, bool& bIncludeNonCollidingComponents, bool& bIncludeChildActorComponents, bool& bLog, float& DebugDrawLifeTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

