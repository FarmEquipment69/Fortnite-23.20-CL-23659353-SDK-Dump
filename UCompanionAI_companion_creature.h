// VerseClass /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature
// Size: 0x1b0
class UCompanionAI_companion_creature : public UVerseAIBase_ai_behavior
{
	unsigned char verse0x4645AA12PingActionsInterface_110[0x8]; // 0x110 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0xECE2B758CreatureActionsInterface_118[0x8]; // 0x118 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0x9146CB8BAIMovementInterface_120[0x8]; // 0x120 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	unsigned char verse0x8FB74E85AbilitySystemComponent_128[0x8]; // 0x128 (0x8) (UNHANDLED PROPERTY TYPE: OptionProperty UID: 0)
	class UDiagnostics_log* verse0xF524C2ACLogger; // 0x130 (0x8)
	unsigned char verse0x4222121EDebugDisplay; // 0x138 (0x1)
	unsigned char unreflected_139[0x7]; // 0x139 (0x7) 
	struct FColors_color verse0x71320F52DebugScreenColor; // 0x140 (0x18)
	double verse0x2D4D6684DebugScreenDuration; // 0x158 (0x8)
	unsigned char verse0x4611DC7EDrawSphereLNvector3MNfloatMNcolorR_160[0x10]; // 0x160 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xAAC24BD9GameLoop_170[0x10]; // 0x170 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xA3816CC6L2fFortnite2ecom2fAI2fCompanionAI2fcompanioncreatureNRLogAndDisplayOnScreenLNKcharR_180[0x10]; // 0x180 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x4EF41FF5L2fFortnite2ecom2fAI2fCompanionAI2fcompanioncreatureNROnConverted_190[0x10]; // 0x190 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xA397BC2DL2fFortnite2ecom2fAI2fCompanionAI2fcompanioncreatureNROnUnconverted_1a0[0x10]; // 0x1a0 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)

	/* Functions */

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted (Has no native function)
	void L2fFortnite2ecom2fAI2fCompanionAI2fcompanioncreatureNROnUnconverted(struct Ftuple_L_R& verse0xB2CDDD72Argument, class UObject*& verse0xB4DBB24FPingActions1, ); // (Public | HasDefaults | BlueprintCallable)

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted (Has no native function)
	void L2fFortnite2ecom2fAI2fCompanionAI2fcompanioncreatureNROnConverted(struct Ftuple_L_R& verse0xB2CDDD72Argument, class UObject*& verse0xB4DBB24FPingActions1, ); // (Public | HasDefaults | BlueprintCallable)

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature.OnBegin (Has no native function)
	class UConcurrency_task* OnBegin(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R (Has no native function)
	void L2fFortnite2ecom2fAI2fCompanionAI2fcompanioncreatureNRLogAndDisplayOnScreenLNKcharR(); // (Public | HasDefaults | BlueprintCallable)

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature.GameLoop (Has no native function)
	class UConcurrency_task* GameLoop(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature.DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R (Has no native function)
	class UConcurrency_task* DrawSphereLNvector3MNfloatMNcolorR(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_Lvector3_Mfloat_Mcolor_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature.$Block (Has no native function)
	void $Block(); // ()

	// Function /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature.$InitCDO (Has no native function)
	void $InitCDO(class UDiagnostics_log*& $ExprResult0, uint64_t& $InstancingGraph1); // (HasDefaults)
};

