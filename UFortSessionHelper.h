// Class /Script/FortniteGame.FortSessionHelper
// Size: 0x1b0
class UFortSessionHelper : public UObject
{
	unsigned char BeaconClientClass_28[0x8]; // 0x28 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	class AFortPartyBeaconClient* PartyBeaconClient; // 0x30 (0x8)
	unsigned char unreflected_38[0x140]; // 0x38 (0x140) 
	struct FName CurrentSessionName; // 0x178 (0x4)
	struct TEnumAsByte<EPartyReservationResult> LastBeaconResponse; // 0x17c (0x1)
	struct TEnumAsByte<EFortSessionHelperJoinState> CurrentJoinState; // 0x17d (0x1)
	enum EFortSessionHelperJoinResult CurrentJoinResult; // 0x17e (0x1)
	unsigned char padding_17f[0x31]; // 0x17f (0x31)
};

