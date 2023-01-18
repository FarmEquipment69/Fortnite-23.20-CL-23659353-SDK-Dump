// Class /Script/FortniteGame.FortCreativePortalManager
// Size: 0x2b0
class AFortCreativePortalManager : public AInfo
{
	struct TArray<class AFortAthenaCreativePortal*> AllPortals; // 0x288 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortPlayerControllerAthena>> PendingPortalReservations; // 0x298 (0x10)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePortalManager.ReleasePortal (Underlying native function: ReleasePortal 0x832f16c)
	void ReleasePortal(class AFortAthenaCreativePortal*& PortalToRelease); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePortalManager.OnPendingReservationPartyLeaderSet (Underlying native function: OnPendingReservationPartyLeaderSet 0x832eb8c)
	void OnPendingReservationPartyLeaderSet(class AFortPlayerController*& PlayerController); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativePortalManager.GetCreativePortalManager (Underlying native function: GetCreativePortalManager 0x832df68)
	static void GetCreativePortalManager(class UObject*& WorldContextObject, class AFortCreativePortalManager*& OutCreativePortalManager, enum ECreativePortalManagerValidityResult& OutIsValid); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

