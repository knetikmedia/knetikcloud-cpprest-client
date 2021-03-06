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
 * ObjectResource.h
 *
 * 
 */

#ifndef ObjectResource_H_
#define ObjectResource_H_


#include "ModelBase.h"

#include "Behavior.h"
#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ObjectResource
    : public ModelBase
{
public:
    ObjectResource();
    virtual ~ObjectResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ObjectResource members

    /// <summary>
    /// The behaviors linked to the item, describing various options and interactions. May not be included in item lists
    /// </summary>
    std::vector<std::shared_ptr<Behavior>>& getBehaviors();
    bool behaviorsIsSet() const;
    void unsetBehaviors();
    void setBehaviors(std::vector<std::shared_ptr<Behavior>> value);
    /// <summary>
    /// A category for filtering items
    /// </summary>
    utility::string_t getCategory() const;
    bool categoryIsSet() const;
    void unsetCategory();
    void setCategory(utility::string_t value);
    /// <summary>
    /// The date the item was created, unix timestamp in seconds
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// A map of additional data. The template will define requirements for the object
    /// </summary>
    std::shared_ptr<Object> getData() const;
    bool dataIsSet() const;
    void unsetData();
    void setData(std::shared_ptr<Object> value);
    /// <summary>
    /// The id of the item
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// A long description of the item
    /// </summary>
    utility::string_t getLongDescription() const;
    bool longDescriptionIsSet() const;
    void unsetLong_description();
    void setLongDescription(utility::string_t value);
    /// <summary>
    /// The name of the item
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// A short description of the item, max 255 chars
    /// </summary>
    utility::string_t getShortDescription() const;
    bool shortDescriptionIsSet() const;
    void unsetShort_description();
    void setShortDescription(utility::string_t value);
    /// <summary>
    /// A number to use in sorting items.  Default 500
    /// </summary>
    int32_t getSort() const;
    bool sortIsSet() const;
    void unsetSort();
    void setSort(int32_t value);
    /// <summary>
    /// List of tags used for filtering items
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);
    /// <summary>
    /// The unique key for the item
    /// </summary>
    utility::string_t getUniqueKey() const;
    bool uniqueKeyIsSet() const;
    void unsetUnique_key();
    void setUniqueKey(utility::string_t value);
    /// <summary>
    /// The date the item was last updated, unix timestamp in seconds
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);

protected:
    std::vector<std::shared_ptr<Behavior>> m_Behaviors;
    bool m_BehaviorsIsSet;
    utility::string_t m_Category;
    bool m_CategoryIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    std::shared_ptr<Object> m_Data;
    bool m_DataIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Long_description;
    bool m_Long_descriptionIsSet;
    utility::string_t m_Name;
        utility::string_t m_Short_description;
    bool m_Short_descriptionIsSet;
    int32_t m_Sort;
    bool m_SortIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    utility::string_t m_Unique_key;
    bool m_Unique_keyIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* ObjectResource_H_ */
