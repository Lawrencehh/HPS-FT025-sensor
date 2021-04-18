<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="17008000">
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="HPS-FT025-sensor" Type="Folder" URL="..">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="High Resolution Relative Seconds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/High Resolution Relative Seconds.vi"/>
				<Item Name="NI_AALBase.lvlib" Type="Library" URL="/&lt;vilib&gt;/Analysis/NI_AALBase.lvlib"/>
				<Item Name="NI_PtbyPt.lvlib" Type="Library" URL="/&lt;vilib&gt;/ptbypt/NI_PtbyPt.lvlib"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
				<Item Name="Write Delimited Spreadsheet (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet (DBL).vi"/>
				<Item Name="Write Delimited Spreadsheet (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet (I64).vi"/>
				<Item Name="Write Delimited Spreadsheet (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet (string).vi"/>
				<Item Name="Write Delimited Spreadsheet.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet.vi"/>
				<Item Name="Write Spreadsheet String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Spreadsheet String.vi"/>
			</Item>
			<Item Name="lvanlys.dll" Type="Document" URL="/&lt;resource&gt;/lvanlys.dll"/>
		</Item>
		<Item Name="程序生成规范" Type="Build">
			<Item Name="我的安装程序" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">HPS-FT025</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{C2B7DB72-27D1-4655-9BFD-3B4EF733B84F}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="DistPart[0].flavorID" Type="Str">_full_</Property>
				<Property Name="DistPart[0].productID" Type="Str">{902E9855-1E7F-464C-AEA1-6906519A14FF}</Property>
				<Property Name="DistPart[0].productName" Type="Str">NI-Serial运行引擎 19.0</Property>
				<Property Name="DistPart[0].upgradeCode" Type="Str">{01D82F43-B48D-46FF-8601-FC4FAAE20F41}</Property>
				<Property Name="DistPart[1].flavorID" Type="Str">_deployment_</Property>
				<Property Name="DistPart[1].productID" Type="Str">{EACEADFB-F69A-4FA2-8AF8-7A4A57C48A2D}</Property>
				<Property Name="DistPart[1].productName" Type="Str">NI-VISA运行引擎 19.0</Property>
				<Property Name="DistPart[1].upgradeCode" Type="Str">{8627993A-3F66-483C-A562-0D3BA3F267B1}</Property>
				<Property Name="DistPart[2].flavorID" Type="Str">DefaultFull</Property>
				<Property Name="DistPart[2].productID" Type="Str">{AF2FEF05-E895-4750-8F69-B5FA5388B2A3}</Property>
				<Property Name="DistPart[2].productName" Type="Str">NI LabVIEW运行引擎 2017</Property>
				<Property Name="DistPart[2].SoftDep[0].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[0].productName" Type="Str">NI LabVIEW运行引擎 2017非英语语言支持</Property>
				<Property Name="DistPart[2].SoftDep[0].upgradeCode" Type="Str">{182AE811-85B6-4238-B67E-F19497CC186B}</Property>
				<Property Name="DistPart[2].SoftDep[1].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[1].productName" Type="Str">NI ActiveX容器</Property>
				<Property Name="DistPart[2].SoftDep[1].upgradeCode" Type="Str">{1038A887-23E1-4289-B0BD-0C4B83C6BA21}</Property>
				<Property Name="DistPart[2].SoftDep[10].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[10].productName" Type="Str">NI mDNS Responder 14.0</Property>
				<Property Name="DistPart[2].SoftDep[10].upgradeCode" Type="Str">{9607874B-4BB3-42CB-B450-A2F5EF60BA3B}</Property>
				<Property Name="DistPart[2].SoftDep[11].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[11].productName" Type="Str">NI Deployment Framework 2017</Property>
				<Property Name="DistPart[2].SoftDep[11].upgradeCode" Type="Str">{838942E4-B73C-492E-81A3-AA1E291FD0DC}</Property>
				<Property Name="DistPart[2].SoftDep[12].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[12].productName" Type="Str">NI错误报告 2017</Property>
				<Property Name="DistPart[2].SoftDep[12].upgradeCode" Type="Str">{42E818C6-2B08-4DE7-BD91-B0FD704C119A}</Property>
				<Property Name="DistPart[2].SoftDep[2].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[2].productName" Type="Str">数学核心库</Property>
				<Property Name="DistPart[2].SoftDep[2].upgradeCode" Type="Str">{699C1AC5-2CF2-4745-9674-B19536EBA8A3}</Property>
				<Property Name="DistPart[2].SoftDep[3].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[3].productName" Type="Str">NI Logos 5.9</Property>
				<Property Name="DistPart[2].SoftDep[3].upgradeCode" Type="Str">{5E4A4CE3-4D06-11D4-8B22-006008C16337}</Property>
				<Property Name="DistPart[2].SoftDep[4].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[4].productName" Type="Str">NI TDM Streaming 17.0</Property>
				<Property Name="DistPart[2].SoftDep[4].upgradeCode" Type="Str">{4CD11BE6-6BB7-4082-8A27-C13771BC309B}</Property>
				<Property Name="DistPart[2].SoftDep[5].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[5].productName" Type="Str">NI LabVIEW Web服务器 2017</Property>
				<Property Name="DistPart[2].SoftDep[5].upgradeCode" Type="Str">{0960380B-EA86-4E0C-8B57-14CD8CCF2C15}</Property>
				<Property Name="DistPart[2].SoftDep[6].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[6].productName" Type="Str">NI LabVIEW Real-Time NBFifo 2017</Property>
				<Property Name="DistPart[2].SoftDep[6].upgradeCode" Type="Str">{4F261250-2C38-488D-A9EC-9D1EFCC24D4B}</Property>
				<Property Name="DistPart[2].SoftDep[7].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[7].productName" Type="Str">NI VC2008MSMs</Property>
				<Property Name="DistPart[2].SoftDep[7].upgradeCode" Type="Str">{FDA3F8BB-BAA9-45D7-8DC7-22E1F5C76315}</Property>
				<Property Name="DistPart[2].SoftDep[8].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[8].productName" Type="Str">NI VC2010MSMs</Property>
				<Property Name="DistPart[2].SoftDep[8].upgradeCode" Type="Str">{EFBA6F9E-F934-4BD7-AC51-60CCA480489C}</Property>
				<Property Name="DistPart[2].SoftDep[9].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[2].SoftDep[9].productName" Type="Str">NI VC2015 Runtime</Property>
				<Property Name="DistPart[2].SoftDep[9].upgradeCode" Type="Str">{D42E7BAE-6589-4570-B6A3-3E28889392E7}</Property>
				<Property Name="DistPart[2].SoftDepCount" Type="Int">13</Property>
				<Property Name="DistPart[2].upgradeCode" Type="Str">{620DBAE1-B159-4204-8186-0813C8A6434C}</Property>
				<Property Name="DistPartCount" Type="Int">3</Property>
				<Property Name="INST_autoIncrement" Type="Bool">true</Property>
				<Property Name="INST_buildLocation" Type="Path">../builds/HPS-FT025/我的安装程序</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">我的安装程序</Property>
				<Property Name="INST_defaultDir" Type="Str">{C2B7DB72-27D1-4655-9BFD-3B4EF733B84F}</Property>
				<Property Name="INST_language" Type="Int">2052</Property>
				<Property Name="INST_productName" Type="Str">HPS-FT025</Property>
				<Property Name="INST_productVersion" Type="Str">1.0.4</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">17008005</Property>
				<Property Name="MSI_autoselectDrivers" Type="Bool">true</Property>
				<Property Name="MSI_distID" Type="Str">{FAAD7DB2-3BA4-4BFA-9B81-27A8CAAC6AB3}</Property>
				<Property Name="MSI_hideNonRuntimes" Type="Bool">true</Property>
				<Property Name="MSI_osCheck" Type="Int">3</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{9223CA93-0C2A-4E84-964E-4B6F3A66560A}</Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{C2B7DB72-27D1-4655-9BFD-3B4EF733B84F}</Property>
				<Property Name="Source[0].File[0].dest" Type="Str">{C2B7DB72-27D1-4655-9BFD-3B4EF733B84F}</Property>
				<Property Name="Source[0].File[0].name" Type="Str">测试平台v1.0.exe</Property>
				<Property Name="Source[0].File[0].Shortcut[0].destIndex" Type="Int">0</Property>
				<Property Name="Source[0].File[0].Shortcut[0].name" Type="Str">测试平台v1.0</Property>
				<Property Name="Source[0].File[0].Shortcut[0].subDir" Type="Str">HPS-FT025</Property>
				<Property Name="Source[0].File[0].ShortcutCount" Type="Int">1</Property>
				<Property Name="Source[0].File[0].tag" Type="Str">{E031A821-27E0-45DA-B8F5-7A012B115E39}</Property>
				<Property Name="Source[0].FileCount" Type="Int">1</Property>
				<Property Name="Source[0].name" Type="Str">我的应用程序</Property>
				<Property Name="Source[0].tag" Type="Ref">/我的电脑/程序生成规范/我的应用程序</Property>
				<Property Name="Source[0].type" Type="Str">EXE</Property>
				<Property Name="SourceCount" Type="Int">1</Property>
			</Item>
			<Item Name="我的应用程序" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{DE77C532-1412-4160-B387-593B5F4B6F65}</Property>
				<Property Name="App_INI_GUID" Type="Str">{F7E5C822-0D05-48EB-BD9C-B69D8A2297E0}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{CBA00EA0-BACF-4885-8CE4-FDFADB64F392}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">我的应用程序</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">ChineseS</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../builds/NI_AB_PROJECTNAME/我的应用程序</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToCommon</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{F9462906-4EEF-4288-824A-BD510A1D21B1}</Property>
				<Property Name="Bld_version.build" Type="Int">2</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">测试平台v1.0.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../builds/NI_AB_PROJECTNAME/我的应用程序/测试平台v1.0.exe</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">支持目录</Property>
				<Property Name="Destination[1].path" Type="Path">../builds/NI_AB_PROJECTNAME/我的应用程序/data</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Source[0].itemID" Type="Str">{B42F4841-2F82-4211-9265-56C8B1274D89}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/我的电脑/HPS-FT025-sensor/main.vi</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_fileDescription" Type="Str">我的应用程序</Property>
				<Property Name="TgtF_internalName" Type="Str">我的应用程序</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">版权 2021 </Property>
				<Property Name="TgtF_productName" Type="Str">我的应用程序</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{E031A821-27E0-45DA-B8F5-7A012B115E39}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">测试平台v1.0.exe</Property>
				<Property Name="TgtF_versionIndependent" Type="Bool">true</Property>
			</Item>
		</Item>
	</Item>
</Project>
