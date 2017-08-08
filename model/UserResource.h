/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UserResource.h
 *
 * 
 */

#ifndef UserResource_H_
#define UserResource_H_


#include "ModelBase.h"

#include "UserRelationshipReferenceResource.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "Property.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserResource
    : public ModelBase
{
public:
    UserResource();
    virtual ~UserResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserResource members

    /// <summary>
    /// A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additionalPropertiesIsSet() const;
    void unsetAdditional_properties();
    void setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value);
    /// <summary>
    /// The first line of the user&#39;s address (private)
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();
    void setAddress(utility::string_t value);
    /// <summary>
    /// The second line of user&#39;s address (private)
    /// </summary>
    utility::string_t getAddress2() const;
    bool address2IsSet() const;
    void unsetAddress2();
    void setAddress2(utility::string_t value);
    /// <summary>
    /// The url of the user&#39;s avatar image
    /// </summary>
    utility::string_t getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetAvatar_url();
    void setAvatarUrl(utility::string_t value);
    /// <summary>
    /// Relationships where this user is the parent. Read-Only, manage through separate endpoints
    /// </summary>
    std::vector<std::shared_ptr<UserRelationshipReferenceResource>>& getChildren();
    bool childrenIsSet() const;
    void unsetChildren();
    void setChildren(std::vector<std::shared_ptr<UserRelationshipReferenceResource>> value);
    /// <summary>
    /// The user&#39;s city (private)
    /// </summary>
    utility::string_t getCity() const;
    bool cityIsSet() const;
    void unsetCity();
    void setCity(utility::string_t value);
    /// <summary>
    /// The ISO3 code for the country from the user&#39;s address (private). Will be filled in based on GeoIP country at registration if not provided.
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountry_code();
    void setCountryCode(utility::string_t value);
    /// <summary>
    /// The code for the user&#39;s real money currency (private)
    /// </summary>
    utility::string_t getCurrencyCode() const;
    bool currencyCodeIsSet() const;
    void unsetCurrency_code();
    void setCurrencyCode(utility::string_t value);
    /// <summary>
    /// The user&#39;s date of birth (private) as a unix timestamp
    /// </summary>
    int64_t getDateOfBirth() const;
    bool dateOfBirthIsSet() const;
    void unsetDate_of_birth();
    void setDateOfBirth(int64_t value);
    /// <summary>
    /// The user&#39;s self description (private)
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// The chosen display name of the user, defaults to username if not present
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplay_name();
    void setDisplayName(utility::string_t value);
    /// <summary>
    /// The user&#39;s email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822)
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// The user&#39;s first name (private)
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirst_name();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// The user&#39;s full name (private)
    /// </summary>
    utility::string_t getFullname() const;
    bool fullnameIsSet() const;
    void unsetFullname();
    void setFullname(utility::string_t value);
    /// <summary>
    /// The user&#39;s gender (private)
    /// </summary>
    utility::string_t getGender() const;
    bool genderIsSet() const;
    void unsetGender();
    void setGender(utility::string_t value);
    /// <summary>
    /// The id of the user
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// The ISO3 code for the user&#39;s currency (private)
    /// </summary>
    utility::string_t getLanguageCode() const;
    bool languageCodeIsSet() const;
    void unsetLanguage_code();
    void setLanguageCode(utility::string_t value);
    /// <summary>
    /// The date the user last interacted with the API (private)
    /// </summary>
    int64_t getLastActivity() const;
    bool lastActivityIsSet() const;
    void unsetLast_activity();
    void setLastActivity(int64_t value);
    /// <summary>
    /// The user&#39;s last name (private)
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLast_name();
    void setLastName(utility::string_t value);
    /// <summary>
    /// The date the user&#39;s info was last updated as a unix timestamp
    /// </summary>
    int64_t getLastUpdated() const;
    bool lastUpdatedIsSet() const;
    void unsetLast_updated();
    void setLastUpdated(int64_t value);
    /// <summary>
    /// The user&#39;s date of registration as a unix timestamp
    /// </summary>
    int64_t getMemberSince() const;
    bool memberSinceIsSet() const;
    void unsetMember_since();
    void setMemberSince(int64_t value);
    /// <summary>
    /// The user&#39;s mobile phone number (private)
    /// </summary>
    utility::string_t getMobileNumber() const;
    bool mobileNumberIsSet() const;
    void unsetMobile_number();
    void setMobileNumber(utility::string_t value);
    /// <summary>
    /// Relationships where this user is the child. Read-Only, manage through separate endpoints
    /// </summary>
    std::vector<std::shared_ptr<UserRelationshipReferenceResource>>& getParents();
    bool parentsIsSet() const;
    void unsetParents();
    void setParents(std::vector<std::shared_ptr<UserRelationshipReferenceResource>> value);
    /// <summary>
    /// The plain text password for the new user account. Required for registration; ignored on profile update.  Use password specific endpoints for editing
    /// </summary>
    utility::string_t getPassword() const;
    bool passwordIsSet() const;
    void unsetPassword();
    void setPassword(utility::string_t value);
    /// <summary>
    /// The user&#39;s postal code (private)
    /// </summary>
    utility::string_t getPostalCode() const;
    bool postalCodeIsSet() const;
    void unsetPostal_code();
    void setPostalCode(utility::string_t value);
    /// <summary>
    /// The user&#39;s state (private)
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();
    void setState(utility::string_t value);
    /// <summary>
    /// Tags on the user. Can only be set by admin. Max length per tag is 64 characters
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);
    /// <summary>
    /// A user template this user is validated against (private). May be null and no validation of properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    bool templateIsSet() const;
    void unsetTemplate();
    void setTemplate(utility::string_t value);
    /// <summary>
    /// The code for the user&#39;s timezone (private)
    /// </summary>
    utility::string_t getTimezoneCode() const;
    bool timezoneCodeIsSet() const;
    void unsetTimezone_code();
    void setTimezoneCode(utility::string_t value);
    /// <summary>
    /// The login username for the user (private). May be set to match email if system does not require usernames separately.
    /// </summary>
    utility::string_t getUsername() const;
        void setUsername(utility::string_t value);

protected:
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
    utility::string_t m_Address;
    bool m_AddressIsSet;
    utility::string_t m_Address2;
    bool m_Address2IsSet;
    utility::string_t m_Avatar_url;
    bool m_Avatar_urlIsSet;
    std::vector<std::shared_ptr<UserRelationshipReferenceResource>> m_Children;
    bool m_ChildrenIsSet;
    utility::string_t m_City;
    bool m_CityIsSet;
    utility::string_t m_Country_code;
    bool m_Country_codeIsSet;
    utility::string_t m_Currency_code;
    bool m_Currency_codeIsSet;
    int64_t m_Date_of_birth;
    bool m_Date_of_birthIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Display_name;
    bool m_Display_nameIsSet;
    utility::string_t m_Email;
        utility::string_t m_First_name;
    bool m_First_nameIsSet;
    utility::string_t m_Fullname;
    bool m_FullnameIsSet;
    utility::string_t m_Gender;
    bool m_GenderIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Language_code;
    bool m_Language_codeIsSet;
    int64_t m_Last_activity;
    bool m_Last_activityIsSet;
    utility::string_t m_Last_name;
    bool m_Last_nameIsSet;
    int64_t m_Last_updated;
    bool m_Last_updatedIsSet;
    int64_t m_Member_since;
    bool m_Member_sinceIsSet;
    utility::string_t m_Mobile_number;
    bool m_Mobile_numberIsSet;
    std::vector<std::shared_ptr<UserRelationshipReferenceResource>> m_Parents;
    bool m_ParentsIsSet;
    utility::string_t m_Password;
    bool m_PasswordIsSet;
    utility::string_t m_Postal_code;
    bool m_Postal_codeIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    utility::string_t m_Template;
    bool m_TemplateIsSet;
    utility::string_t m_Timezone_code;
    bool m_Timezone_codeIsSet;
    utility::string_t m_Username;
    };

}
}
}
}

#endif /* UserResource_H_ */
