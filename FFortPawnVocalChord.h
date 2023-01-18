// ScriptStruct /Script/FortniteGame.FortPawnVocalChord
// Size: 0xd8
struct FFortPawnVocalChord
{
	class UAudioComponent* FeedbackAudioComponent; // 0x0 (0x8)
	struct FFortSpokenLine ReplicatedSpokenLine; // 0x8 (0x30)
	struct FFortSpokenLine PendingSpokenLine; // 0x38 (0x30)
	struct FFortSpokenLine QueuedSpokenLine; // 0x68 (0x30)
	struct FFortSpokenLine CurrentSpokenLine; // 0x98 (0x30)
	unsigned char padding_c8[0x10]; // 0xc8 (0x10)
};

