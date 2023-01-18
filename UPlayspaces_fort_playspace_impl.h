// VerseClass /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl
// Size: 0xb8
class UPlayspaces_fort_playspace_impl : public UVerseFortnitePlayspace
{
	unsigned char unreflected_58[0x50]; // 0x58 (0x50) 
	class UVerseEngine_multicast_delegate* verse0xD574E81APlayerAddedEventInternal; // 0xa8 (0x8)
	class UVerseEngine_multicast_delegate* verse0x91891F4APlayerRemovedEventInternal; // 0xb0 (0x8)
	unsigned char verse0x3B43FA74L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRGetPlayers_58[0x10]; // 0x58 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char unreflected_68[0x10]; // 0x68 (0x10) 
	unsigned char verse0x6F10F71BL2fFortnite2ecom2fPlayspaces2ffortplayspaceNRGetTeamForPlayerLNplayerR_78[0x10]; // 0x78 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x3AAADBFCL2fFortnite2ecom2fPlayspaces2ffortplayspaceNRGetTeams_68[0x10]; // 0x68 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char unreflected_78[0x10]; // 0x78 (0x10) 
	unsigned char verse0x5ED7C0BAL2fFortnite2ecom2fPlayspaces2ffortplayspaceNRPlayerAddedEvent_88[0x10]; // 0x88 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x8B6A4ED9L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRPlayerRemovedEvent_98[0x10]; // 0x98 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char padding_a8[0x10]; // 0xa8 (0x10)

	/* Functions */

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent (Has no native function)
	class UObject* L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRPlayerRemovedEvent(struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent (Has no native function)
	class UObject* L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRPlayerAddedEvent(struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeams (Underlying native function: _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeams 0x6d4c3c4)
	struct TArray<class USimulation_team*> L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRGetTeams(struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamForPlayer_L_Nplayer_R (Underlying native function: _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamForPlayer_L_Nplayer_R 0x6d4c3bc)
	void L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRGetTeamForPlayerLNplayerR(class USimulation_player*& verse0xB2CDDD72Argument); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers (Underlying native function: _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers 0x6d4c3b4)
	struct TArray<class USimulation_player*> L2fFortnite2ecom2fPlayspaces2ffortplayspaceNRGetPlayers(struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl.$Block (Has no native function)
	void $Block(); // ()

	// Function /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl.$InitCDO (Has no native function)
	void $InitCDO(class UVerseEngine_multicast_delegate*& $ExprResult0, uint64_t& $InstancingGraph1, class UVerseEngine_multicast_delegate*& $ExprResult2, uint64_t& $InstancingGraph3); // (HasDefaults)
};

