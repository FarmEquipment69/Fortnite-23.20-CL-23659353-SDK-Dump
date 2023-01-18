// Class /Script/FortniteGame.FortControllerComponent_Portal
// Size: 0xa8
class UFortControllerComponent_Portal : public UFortControllerComponent
{
	bool bAllowRequeueToLinks; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_Portal.ServerSetPortalLinkCode (Underlying native function: ServerSetPortalLinkCode 0x86d158c)
	void ServerSetPortalLinkCode(class UFortPortalComponent*& PortalComponent, struct FOnlineLinkId& LinkId); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.OnPortalMatchmakingComplete (Underlying native function: OnPortalMatchmakingComplete 0x86d09d4)
	void OnPortalMatchmakingComplete(bool& bSuccess); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.IsOnPortalHudEnabled (Underlying native function: IsOnPortalHudEnabled 0x86d0404)
	static bool IsOnPortalHudEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.IsGameDetailPreviewScreenEnabled (Underlying native function: IsGameDetailPreviewScreenEnabled 0x86d03ac)
	static bool IsGameDetailPreviewScreenEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.InitiateMatchmakingToPortalOrigin (Underlying native function: InitiateMatchmakingToPortalOrigin 0x86d0398)
	void InitiateMatchmakingToPortalOrigin(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.ClientInitiateMatchmakingToPortalOrigin (Underlying native function: ClientInitiateMatchmakingToPortalOrigin 0x6a4bfa4)
	void ClientInitiateMatchmakingToPortalOrigin(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanInitiatePrivateMatchmaking (Underlying native function: CanInitiatePrivateMatchmaking 0x86cf600)
	static bool CanInitiatePrivateMatchmaking(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanInitiatePortalMatchmkaing (Underlying native function: CanInitiatePortalMatchmkaing 0x86cf530)
	bool CanInitiatePortalMatchmkaing(class UFortPortalComponent*& PortalComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanInitiateMatchmakingToPortalOrigin (Underlying native function: CanInitiateMatchmakingToPortalOrigin 0x86cf50c)
	bool CanInitiateMatchmakingToPortalOrigin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanCancelPortalMatchmaking (Underlying native function: CanCancelPortalMatchmaking 0x86cf4e8)
	bool CanCancelPortalMatchmaking(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

