/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * VendorResource.h
 *
 * 
 */

#ifndef VendorResource_H_
#define VendorResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "Property.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  VendorResource
    : public ModelBase
{
public:
    VendorResource();
    virtual ~VendorResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VendorResource members

    /// <summary>
    /// Whether the vendor is active.  Default &#x3D; true
    /// </summary>
    bool getActive() const;
    void setActive(bool value);
    bool activeIsSet() const;
    void unsetActive();
    /// <summary>
    /// A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additional_propertiesIsSet() const;
    void unsetAdditional_properties();
    /// <summary>
    /// The date the vendor was added. Unix timestamp in seconds
    /// </summary>
    int64_t getCreateDate() const;
    void setCreateDate(int64_t value);
    bool create_dateIsSet() const;
    void unsetCreate_date();
    /// <summary>
    /// A description of the vendor
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// The id of the vendor
    /// </summary>
    int32_t getId() const;
    void setId(int32_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The url of an image for the vendor
    /// </summary>
    utility::string_t getImageUrl() const;
    void setImageUrl(utility::string_t value);
    bool image_urlIsSet() const;
    void unsetImage_url();
    /// <summary>
    /// Whether the vendor needs to manually approve invoices before they are paid.  A separate checkout flow is required in this case.  Default: false
    /// </summary>
    bool getManualApproval() const;
    void setManualApproval(bool value);
    bool manual_approvalIsSet() const;
    void unsetManual_approval();
    /// <summary>
    /// The name of the vendor
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The primary email address for the vendor
    /// </summary>
    utility::string_t getPrimaryContactEmail() const;
    void setPrimaryContactEmail(utility::string_t value);
    bool primary_contact_emailIsSet() const;
    void unsetPrimary_contact_email();
    /// <summary>
    /// The name of the primary contact for the vendor
    /// </summary>
    utility::string_t getPrimaryContactName() const;
    void setPrimaryContactName(utility::string_t value);
    bool primary_contact_nameIsSet() const;
    void unsetPrimary_contact_name();
    /// <summary>
    /// The primary phone number for the vendor
    /// </summary>
    utility::string_t getPrimaryContactPhone() const;
    void setPrimaryContactPhone(utility::string_t value);
    bool primary_contact_phoneIsSet() const;
    void unsetPrimary_contact_phone();
    /// <summary>
    /// The email address for sale inquiries for the vendor
    /// </summary>
    utility::string_t getSalesEmail() const;
    void setSalesEmail(utility::string_t value);
    bool sales_emailIsSet() const;
    void unsetSales_email();
    /// <summary>
    /// The email address for support inquiries for the vendor
    /// </summary>
    utility::string_t getSupportEmail() const;
    void setSupportEmail(utility::string_t value);
    bool support_emailIsSet() const;
    void unsetSupport_email();
    /// <summary>
    /// A user template this user is validated against (private). May be null and no validation of properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    void setTemplate(utility::string_t value);
    bool templateIsSet() const;
    void unsetTemplate();
    /// <summary>
    /// The date the vendor was last updated. Unix timestamp in seconds
    /// </summary>
    int64_t getUpdateDate() const;
    void setUpdateDate(int64_t value);
    bool update_dateIsSet() const;
    void unsetUpdate_date();
    /// <summary>
    /// The url for the vendor&#39;s site
    /// </summary>
    utility::string_t getUrl() const;
    void setUrl(utility::string_t value);
    bool urlIsSet() const;
    void unsetUrl();

protected:
    bool m_Active;
    bool m_ActiveIsSet;
std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
int64_t m_Create_date;
    bool m_Create_dateIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
int32_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Image_url;
    bool m_Image_urlIsSet;
bool m_Manual_approval;
    bool m_Manual_approvalIsSet;
utility::string_t m_Name;
    utility::string_t m_Primary_contact_email;
    bool m_Primary_contact_emailIsSet;
utility::string_t m_Primary_contact_name;
    bool m_Primary_contact_nameIsSet;
utility::string_t m_Primary_contact_phone;
    bool m_Primary_contact_phoneIsSet;
utility::string_t m_Sales_email;
    bool m_Sales_emailIsSet;
utility::string_t m_Support_email;
    bool m_Support_emailIsSet;
utility::string_t m_Template;
    bool m_TemplateIsSet;
int64_t m_Update_date;
    bool m_Update_dateIsSet;
utility::string_t m_Url;
    bool m_UrlIsSet;
};

}
}
}
}

#endif /* VendorResource_H_ */
