// Class /Script/FortniteGame.FortAnimNotify_GenericSoundIndicator
// Size: 0x80
class UFortAnimNotify_GenericSoundIndicator : public UAnimNotify
{
	bool bTryUsingOwnerSoundIndicator; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct TWeakObjectPtr<class USoundBase> BaseSound; // 0x40 (0x28)
	float MaxAudibleDistance; // 0x68 (0x4)
	enum EFortSoundIndicatorTypes IndicatorType; // 0x6c (0x1)
	bool bIgnoreForLocalPlayer; // 0x6d (0x1)
	unsigned char unreflected_6e[0x2]; // 0x6e (0x2) 
	struct TArray<struct TEnumAsByte<EFortTeamAffiliation>> ShowAffiliations; // 0x70 (0x10)
};

