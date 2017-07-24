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
 * PageResource«OauthAccessTokenResource».h
 *
 * 
 */

#ifndef PageResource«OauthAccessTokenResource»_H_
#define PageResource«OauthAccessTokenResource»_H_


#include "ModelBase.h"

#include "OauthAccessTokenResource.h"
#include "Order.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PageResource«OauthAccessTokenResource»
    : public ModelBase
{
public:
    PageResource«OauthAccessTokenResource»();
    virtual ~PageResource«OauthAccessTokenResource»();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PageResource«OauthAccessTokenResource» members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<OauthAccessTokenResource>>& getContent();
    bool contentIsSet() const;
    void unsetContent();
    void setContent(std::vector<std::shared_ptr<OauthAccessTokenResource>> value);
    /// <summary>
    /// 
    /// </summary>
    bool getFirst() const;
    bool firstIsSet() const;
    void unsetFirst();
    void setFirst(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool getLast() const;
    bool lastIsSet() const;
    void unsetLast();
    void setLast(bool value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumberOfElements() const;
    bool numberOfElementsIsSet() const;
    void unsetNumber_of_elements();
    void setNumberOfElements(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Order>>& getSort();
    bool sortIsSet() const;
    void unsetSort();
    void setSort(std::vector<std::shared_ptr<Order>> value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getTotalElements() const;
    bool totalElementsIsSet() const;
    void unsetTotal_elements();
    void setTotalElements(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPages() const;
    bool totalPagesIsSet() const;
    void unsetTotal_pages();
    void setTotalPages(int32_t value);

protected:
    std::vector<std::shared_ptr<OauthAccessTokenResource>> m_Content;
    bool m_ContentIsSet;
    bool m_First;
    bool m_FirstIsSet;
    bool m_Last;
    bool m_LastIsSet;
    int32_t m_number;
    bool m_numberIsSet;
    int32_t m_Number_of_elements;
    bool m_Number_of_elementsIsSet;
    int32_t m_Size;
    bool m_SizeIsSet;
    std::vector<std::shared_ptr<Order>> m_Sort;
    bool m_SortIsSet;
    int64_t m_Total_elements;
    bool m_Total_elementsIsSet;
    int32_t m_Total_pages;
    bool m_Total_pagesIsSet;
};

}
}
}
}

#endif /* PageResource«OauthAccessTokenResource»_H_ */
