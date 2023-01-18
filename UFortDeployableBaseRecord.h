// Class /Script/FortniteGame.FortDeployableBaseRecord
// Size: 0xf8
class UFortDeployableBaseRecord : public UFortGenericRecord
{
	struct TArray<struct FFortActorRecord> Actors; // 0xe0 (0x10)
	unsigned char bNeedsFullActorSave; // 0xf0 (0x1)
	unsigned char padding_f1[0x7]; // 0xf1 (0x7)
};

