// Class /Script/FortniteGame.FortAthenaMutator_AI_SignificanceBasedUpdate
// Size: 0x3c8
class AFortAthenaMutator_AI_SignificanceBasedUpdate : public AFortAthenaMutator_AI
{
	struct FScalableFloat bShouldUseSignificanceBasedMovementUpdatesOnClient; // 0x358 (0x28)
	struct FScalableFloat bShouldUseSignificanceBasedMovementUpdatesOnServer; // 0x380 (0x28)
	struct TArray<struct FAIPawnSignificanceBasedMovementUpdateBucket> SignificanceBasedMovementUpdateBuckets; // 0x3a8 (0x10)
	struct TArray<class UFortMovementComp_Character*> SignificanceBasedMovementUpdateManagedComponents; // 0x3b8 (0x10)
};

