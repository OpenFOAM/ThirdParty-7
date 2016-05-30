/*****************************************************************************
*
* Copyright (c) 2000 - 2013, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#ifndef MACHINEPROFILE_H
#define MACHINEPROFILE_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>

class LaunchProfile;

// ****************************************************************************
// Class: MachineProfile
//
// Purpose:
//    This class contains information about a host for a remote VisIt engine.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class STATE_API MachineProfile : public AttributeSubject
{
public:
    enum ClientHostDetermination
    {
        MachineName,
        ManuallySpecified,
        ParsedFromSSHCLIENT
    };

    // These constructors are for objects of this class
    MachineProfile();
    MachineProfile(const MachineProfile &obj);
protected:
    // These constructors are for objects derived from this class
    MachineProfile(private_tmfs_t tmfs);
    MachineProfile(const MachineProfile &obj, private_tmfs_t tmfs);
public:
    virtual ~MachineProfile();

    virtual MachineProfile& operator = (const MachineProfile &obj);
    virtual bool operator == (const MachineProfile &obj) const;
    virtual bool operator != (const MachineProfile &obj) const;
private:
    void Init();
    void Copy(const MachineProfile &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectHost();
    void SelectUserName();
    void SelectHostAliases();
    void SelectHostNickname();
    void SelectDirectory();
    void SelectSshCommand();
    void SelectGatewayHost();
    void SelectManualClientHostName();
    void SelectLaunchProfiles();

    // Property setting methods
    void SetHost(const std::string &host_);
    void SetUserName(const std::string &userName_);
    void SetHostAliases(const std::string &hostAliases_);
    void SetHostNickname(const std::string &hostNickname_);
    void SetDirectory(const std::string &directory_);
    void SetShareOneBatchJob(bool shareOneBatchJob_);
    void SetSshPortSpecified(bool sshPortSpecified_);
    void SetSshPort(int sshPort_);
    void SetSshCommandSpecified(bool sshCommandSpecified_);
    void SetSshCommand(const stringVector &sshCommand_);
    void SetUseGateway(bool useGateway_);
    void SetGatewayHost(const std::string &gatewayHost_);
    void SetClientHostDetermination(ClientHostDetermination clientHostDetermination_);
    void SetManualClientHostName(const std::string &manualClientHostName_);
    void SetTunnelSSH(bool tunnelSSH_);
    void SetMaximumNodesValid(bool maximumNodesValid_);
    void SetMaximumNodes(int maximumNodes_);
    void SetMaximumProcessorsValid(bool maximumProcessorsValid_);
    void SetMaximumProcessors(int maximumProcessors_);
    void SetActiveProfile(int activeProfile_);

    // Property getting methods
    const std::string  &GetHost() const;
          std::string  &GetHost();
    const std::string  &GetUserName() const;
          std::string  &GetUserName();
    const std::string  &GetHostAliases() const;
          std::string  &GetHostAliases();
    const std::string  &GetHostNickname() const;
          std::string  &GetHostNickname();
    const std::string  &GetDirectory() const;
          std::string  &GetDirectory();
    bool               GetShareOneBatchJob() const;
    bool               GetSshPortSpecified() const;
    int                GetSshPort() const;
    bool               GetSshCommandSpecified() const;
    const stringVector &GetSshCommand() const;
          stringVector &GetSshCommand();
    bool               GetUseGateway() const;
    const std::string  &GetGatewayHost() const;
          std::string  &GetGatewayHost();
    ClientHostDetermination GetClientHostDetermination() const;
    const std::string  &GetManualClientHostName() const;
          std::string  &GetManualClientHostName();
    bool               GetTunnelSSH() const;
    bool               GetMaximumNodesValid() const;
    int                GetMaximumNodes() const;
    bool               GetMaximumProcessorsValid() const;
    int                GetMaximumProcessors() const;
    const AttributeGroupVector &GetLaunchProfiles() const;
          AttributeGroupVector &GetLaunchProfiles();
    int                GetActiveProfile() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Attributegroup convenience methods
    void AddLaunchProfiles(const LaunchProfile &);
    void ClearLaunchProfiles();
    void RemoveLaunchProfiles(int i);
    int  GetNumLaunchProfiles() const;
    LaunchProfile &GetLaunchProfiles(int i);
    const LaunchProfile &GetLaunchProfiles(int i) const;

    LaunchProfile &operator [] (int i);
    const LaunchProfile &operator [] (int i) const;

    // Enum conversion functions
    static std::string ClientHostDetermination_ToString(ClientHostDetermination);
    static bool ClientHostDetermination_FromString(const std::string &, ClientHostDetermination &);
protected:
    static std::string ClientHostDetermination_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    static std::string defaultUserName;
    const std::string &UserName() const;
    static MachineProfile Default(const std::string &host=std::string(), const std::string &user=std::string());
    static std::vector<std::string> SplitHostPattern(const std::string &host);
    bool ProfileMatchesHost(const std::string&) const;
    std::string GetShortHostname() const;
    static std::string GetShortHostname(const std::string &host);
    static const std::string &GetDefaultUserName();
    static void SetDefaultUserName(const std::string &n);
    LaunchProfile *GetActiveLaunchProfile() const;
    void SelectOnlyDifferingFields(MachineProfile &other);
    void Print(ostream &) const;

    // IDs that can be used to identify fields in case statements
    enum {
        ID_host = 0,
        ID_userName,
        ID_hostAliases,
        ID_hostNickname,
        ID_directory,
        ID_shareOneBatchJob,
        ID_sshPortSpecified,
        ID_sshPort,
        ID_sshCommandSpecified,
        ID_sshCommand,
        ID_useGateway,
        ID_gatewayHost,
        ID_clientHostDetermination,
        ID_manualClientHostName,
        ID_tunnelSSH,
        ID_maximumNodesValid,
        ID_maximumNodes,
        ID_maximumProcessorsValid,
        ID_maximumProcessors,
        ID_launchProfiles,
        ID_activeProfile,
        ID__LAST
    };

protected:
    AttributeGroup *CreateSubAttributeGroup(int index);
private:
    std::string          host;
    std::string          userName;
    std::string          hostAliases;
    std::string          hostNickname;
    std::string          directory;
    bool                 shareOneBatchJob;
    bool                 sshPortSpecified;
    int                  sshPort;
    bool                 sshCommandSpecified;
    stringVector         sshCommand;
    bool                 useGateway;
    std::string          gatewayHost;
    int                  clientHostDetermination;
    std::string          manualClientHostName;
    bool                 tunnelSSH;
    bool                 maximumNodesValid;
    int                  maximumNodes;
    bool                 maximumProcessorsValid;
    int                  maximumProcessors;
    AttributeGroupVector launchProfiles;
    int                  activeProfile;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define MACHINEPROFILE_TMFS "sssssbbibs*bsisbbibia*i"

#endif
