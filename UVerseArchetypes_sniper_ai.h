// VerseClass /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai
// Size: 0x258
class UVerseArchetypes_sniper_ai : public UVerseAIBase_ai_behavior
{
	unsigned char verse0xE1D221D8NPCMovementInterface_110[0x8]; // 0x110 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0x44482AE5InventoryInterface_118[0x8]; // 0x118 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0x93DA469BThreatPerceptionInterface_120[0x8]; // 0x120 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0x83124E52NPCActionsInterface_128[0x8]; // 0x128 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0xCC490D1FWeaponActionsInterface_130[0x8]; // 0x130 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0x0EC93C6CUseSuggestedWeaponCallbackId_138[0x9]; // 0x138 (0x9) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char unreflected_141[0x7]; // 0x141 (0x7) 
	class UVerse_event* verse0xFEDF9D07WeaponChangedEvent; // 0x148 (0x8)
	double verse0xFB573059InitialHealth; // 0x150 (0x8)
	double verse0x058B2B11InitialShield; // 0x158 (0x8)
	double verse0x81441520LeashInnerRadius; // 0x160 (0x8)
	double verse0x5D9BBC18LeashOuterRadius; // 0x168 (0x8)
	double verse0xD1AB87B0PatrolWaitDelay; // 0x170 (0x8)
	double verse0x361CED6DSwitchWeaponRadius; // 0x178 (0x8)
	class UVerseAIBase_fort_item_tag* verse0xE098BDBCLongRangeWeaponTag; // 0x180 (0x8)
	class UVerseAIBase_fort_item_tag* verse0xF39254E6ShortRangeWeaponTag; // 0x188 (0x8)
	class UDiagnostics_log* verse0xF524C2ACLogger; // 0x190 (0x8)
	struct FColors_color verse0x71320F52DebugScreenColor; // 0x198 (0x18)
	double verse0x2D4D6684DebugScreenDuration; // 0x1b0 (0x8)
	unsigned char verse0x84102A9AL2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNREquipWeaponLNfortitemtagR_1b8[0x10]; // 0x1b8 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x3B07A1D3LookAtThreatLNfortthreatinfoR_1c8[0x10]; // 0x1c8 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xC66530C3PatrolAround_1d8[0x10]; // 0x1d8 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xE8D32BAFL2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNRPrintMessageLNKcharR_1e8[0x10]; // 0x1e8 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xB2BD95D8RunGameplayLogic_1f8[0x10]; // 0x1f8 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xBE75D983SelectFightingStanceLNfortthreatinfoR_208[0x10]; // 0x208 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xD8E2DA3AL2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNRSelectWeaponForThreatLNfortthreatinfoR_218[0x10]; // 0x218 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x18749B67L2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNRShouldUseSuggestedWeaponLNfortitemdescriptorR_228[0x10]; // 0x228 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x77DF9367TryToAttackThreatLNfortthreatinfoR_238[0x10]; // 0x238 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x32A4BC4AUseSniperWeaponLNfortthreatinfoR_248[0x10]; // 0x248 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)

	/* Functions */

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.UseSniperWeapon_L_Nfort__threat__info_R (Has no native function)
	class UConcurrency_task* UseSniperWeaponLNfortthreatinfoR(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct FVerseAIBase_fort_threat_info& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.TryToAttackThreat_L_Nfort__threat__info_R (Has no native function)
	class UConcurrency_task* TryToAttackThreatLNfortthreatinfoR(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct FVerseAIBase_fort_threat_info& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai._L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RShouldUseSuggestedWeapon_L_Nfort__item__descriptor_R (Has no native function)
	unsigned char L2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNRShouldUseSuggestedWeaponLNfortitemdescriptorR(struct FVerseAIBase_fort_item_descriptor& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai._L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RSelectWeaponForThreat_L_Nfort__threat__info_R (Has no native function)
	unsigned char L2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNRSelectWeaponForThreatLNfortthreatinfoR(struct FVerseAIBase_fort_threat_info& verse0xB2CDDD72Argument); // (Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.SelectFightingStance_L_Nfort__threat__info_R (Has no native function)
	class UConcurrency_task* SelectFightingStanceLNfortthreatinfoR(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct FVerseAIBase_fort_threat_info& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.RunGameplayLogic (Has no native function)
	class UConcurrency_task* RunGameplayLogic(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai._L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RPrintMessage_L_N_Kchar_R (Has no native function)
	void L2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNRPrintMessageLNKcharR(); // (Public | HasDefaults | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.PatrolAround (Has no native function)
	class UConcurrency_task* PatrolAround(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd (Has no native function)
	void L2fFortnite2ecom2fAI2fVerseAIBase2faibehaviorNROnEnd(struct Ftuple_L_R& verse0xB2CDDD72Argument, int64_t& verse0xD3E63614CallbackId1, ); // (Public | HasDefaults | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.OnBegin (Has no native function)
	class UConcurrency_task* OnBegin(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.LookAtThreat_L_Nfort__threat__info_R (Has no native function)
	class UConcurrency_task* LookAtThreatLNfortthreatinfoR(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct FVerseAIBase_fort_threat_info& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai._L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_REquipWeapon_L_Nfort__item__tag_R (Has no native function)
	unsigned char L2fFortnite2ecom2fAI2fVerseArchetypes2fsniperaiNREquipWeaponLNfortitemtagR(class UVerseAIBase_fort_item_tag*& verse0xB2CDDD72Argument); // (Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.$Block (Has no native function)
	void $Block(); // ()

	// Function /VerseArchetypes/_Verse/VNI/VerseArchetypes.VerseArchetypes_sniper_ai.$InitCDO (Has no native function)
	void $InitCDO(); // (HasDefaults)
};

