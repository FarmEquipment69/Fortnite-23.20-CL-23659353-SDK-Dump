// Class /Script/Party.SocialChatManager
// Size: 0x220
class USocialChatManager : public UObject
{
	unsigned char unreflected_28[0x50]; // 0x28 (0x50) 
	struct TMap<struct TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x78 (0x50)
	struct TMap<struct FString, class USocialChatRoom*> ChatRoomsById; // 0xc8 (0x50)
	struct TMap<struct FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x118 (0x50)
	bool bEnableChatSlashCommands; // 0x168 (0x1)
	unsigned char unreflected_169[0x7]; // 0x169 (0x7) 
	struct TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels; // 0x170 (0x50)
	unsigned char padding_1c0[0x60]; // 0x1c0 (0x60)
};

