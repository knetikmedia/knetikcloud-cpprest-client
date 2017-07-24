/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * DeviceResource.h
 *
 * 
 */

#ifndef DeviceResource_H_
#define DeviceResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"
#include <map>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DeviceResource
    : public ModelBase
{
public:
    DeviceResource();
    virtual ~DeviceResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeviceResource members

    /// <summary>
    /// The authorization code for the device
    /// </summary>
    utility::string_t getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetAuthorization();
    void setAuthorization(utility::string_t value);
    /// <summary>
    /// The current condition of the device (New, Defective, Reconditioned)
    /// </summary>
    utility::string_t getCondition() const;
    bool conditionIsSet() const;
    void unsetCondition();
    void setCondition(utility::string_t value);
    /// <summary>
    /// The date the device log was created
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The key/value pairs for extended data
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getData();
    bool dataIsSet() const;
    void unsetData();
    void setData(std::map<utility::string_t, utility::string_t> value);
    /// <summary>
    /// The description of the device
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// The type of the device
    /// </summary>
    utility::string_t getDeviceType() const;
    bool deviceTypeIsSet() const;
    void unsetDevice_type();
    void setDeviceType(utility::string_t value);
    /// <summary>
    /// The unique ID for this device. Cannot be changed once created
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// The location of the device
    /// </summary>
    utility::string_t getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();
    void setLocation(utility::string_t value);
    /// <summary>
    /// The MAC (media access control) address of the device
    /// </summary>
    utility::string_t getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetMac_address();
    void setMacAddress(utility::string_t value);
    /// <summary>
    /// The make of the device
    /// </summary>
    utility::string_t getMake() const;
    bool makeIsSet() const;
    void unsetMake();
    void setMake(utility::string_t value);
    /// <summary>
    /// The model of the device
    /// </summary>
    utility::string_t getModel() const;
    bool modelIsSet() const;
    void unsetModel();
    void setModel(utility::string_t value);
    /// <summary>
    /// The name of the device
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// The OS (operating system) on the device
    /// </summary>
    utility::string_t getOs() const;
    bool osIsSet() const;
    void unsetOs();
    void setOs(utility::string_t value);
    /// <summary>
    /// The serial number of the device
    /// </summary>
    utility::string_t getSerial() const;
    bool serialIsSet() const;
    void unsetSerial();
    void setSerial(utility::string_t value);
    /// <summary>
    /// The current status the device (Active, Pending Active, Inactive, Repair
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// The date the device log was updated
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);
    /// <summary>
    /// The user that owns the device
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
    bool userIsSet() const;
    void unsetUser();
    void setUser(std::shared_ptr<SimpleUserResource> value);
    /// <summary>
    /// The users currently using the device
    /// </summary>
    std::vector<std::shared_ptr<SimpleUserResource>>& getUsers();
    bool usersIsSet() const;
    void unsetUsers();
    void setUsers(std::vector<std::shared_ptr<SimpleUserResource>> value);

protected:
    utility::string_t m_Authorization;
    bool m_AuthorizationIsSet;
    utility::string_t m_Condition;
    bool m_ConditionIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    std::map<utility::string_t, utility::string_t> m_Data;
    bool m_DataIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Device_type;
    bool m_Device_typeIsSet;
    int32_t m_Id;
        utility::string_t m_Location;
    bool m_LocationIsSet;
    utility::string_t m_Mac_address;
    bool m_Mac_addressIsSet;
    utility::string_t m_Make;
    bool m_MakeIsSet;
    utility::string_t m_Model;
    bool m_ModelIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Os;
    bool m_OsIsSet;
    utility::string_t m_Serial;
    bool m_SerialIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
    std::shared_ptr<SimpleUserResource> m_User;
    bool m_UserIsSet;
    std::vector<std::shared_ptr<SimpleUserResource>> m_Users;
    bool m_UsersIsSet;
};

}
}
}
}

#endif /* DeviceResource_H_ */
